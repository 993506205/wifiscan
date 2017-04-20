typedef struct {
	unsigned char MAC[6];	// 6 bytes of MAC address of AP
	int channel; 			// channel number 1-13
	double frequency; 		// frequency of this channel
	char essid[100];		// ESSID of the network
	int slevel; 			// signal level in dBm
}WIFI_INFO;
	
//#define DEBUG
#define CMD "sudo iwlist wlan0 scan | egrep \"Address|Frequency|ESSID|Quality\" > scan.txt"
#define SFILE "scan.txt"

// function prototypes
void read_data(void);
void remove_spaces(char []);	// this function removes leading spaces of a string/line
void get_MAC(char [], char []);	// this function reads MAC address of AP from 1st line
double get_frequency(char []);	// this function reads carrier frequency from 2nd line
int get_channel(char []);		// this function read channel number from 2nd line
int get_slevel(char []); 	// this function reads signal level from 3rd line
void get_essid(char [], char []); 	// this function reads ESSID from the 4th line
void displayNetworks(WIFI_INFO [], int);	// display networks on screen
void disp(WIFI_INFO, int); // display one network with index number (color code)
