#include <usb_names.h>

#define USB_NAME {'S','O','L','I','D','I','T','Y',' ','S','y','n','t','h'}
#define USB_NAME_LEN 14

struct usb_string_descriptor_struct usb_string_product_name = {
        2 + USB_NAME_LEN * 2,
        3,
        USB_NAME
};