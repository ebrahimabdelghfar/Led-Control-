#include "tm4c123gh6pm.h"
#include "types.h"
#include "bitwise_operation.h"

/*Port_Init(unint8 port) description: initate the GPIO clK
    parameter: take the name of the port (defined in ports.h) you want to activate its clock
        example: Port_Init(port_A);
    return : no return
*/
void Port_Init(uint8 Port) {
    SYSCTL_RCGCGPIO_R |= selected_port(Port, 1);
    while (SYSCTL_PRGPIO_R & selected_port(Port, 1)==0) {};
}


/*Pin_Direction description: determine if the pin is input or output
    parameter:
        uint8 Port : enter the name of port "defined at Ports.h". Where pin is located. 
            example: port_A , port_B , Port_C , port_D , port_F

        uint8 Pin : enter the number of pin that you want to configure

        uint8 direction : enter what directtion that you want
            example: input , output
    return : no return
*/
void Pin_Direction(uint8 Port,uint8 pin,uint8 Direction){ //do you want direction
    switch (Port) {
        case 0://port A
            GPIO_PORTA_DIR_R |= set_selected_pin(pin,Direction);
            break;
        case 1://port B
            GPIO_PORTB_DIR_R |= set_selected_pin(pin,Direction);
            break;
        case 2://port C
            GPIO_PORTC_DIR_R |= set_selected_pin(pin,Direction);
            break;
        case 3://port D
            GPIO_PORTD_DIR_R |= set_selected_pin(pin,Direction);
            break;
        case 4://port E
            GPIO_PORTE_DIR_R |= set_selected_pin(pin,Direction);
            break;
        case 5://port F
            GPIO_PORTF_DIR_R |= set_selected_pin(pin,Direction);
            break;
    }
}

/*Pin_DEN description: enable the digital configuration for the pin
    parameter:
        uint8 Port : enter the name of port "defined at Ports.h". Where pin is located. 
            example: port_A , port_B , Port_C , port_D , port_F

        uint8 Pin : enter the number of pin that you want to configure

        uint8 direction : enter what configure you want that you want
            example:   disable , enable

    return : no return
*/

void Pin_DEN(uint8 Port,uint8 pin,uint8 DEN) { //do you want DEN
    switch (Port) {
        case 0://port A
            GPIO_PORTA_DEN_R |= set_selected_pin(pin, DEN);
            break;
        case 1://port B
            GPIO_PORTB_DEN_R |= set_selected_pin(pin, DEN);
            break;
        case 2://port C
            GPIO_PORTC_DEN_R |= set_selected_pin(pin, DEN);
            break;
        case 3://port D
            GPIO_PORTD_DEN_R |= set_selected_pin(pin, DEN);
            break;
        case 4://port E
            GPIO_PORTE_DEN_R |= set_selected_pin(pin, DEN);
            break;
        case 5://port F
            GPIO_PORTF_DEN_R |= set_selected_pin(pin, DEN);
            break;
     }
}
/*Pin_Write(uint8 Port,uint8 pin,uint8 Status) description: 

    parameter:
        uint8 Port : enter the name of port "defined at Ports.h". Where pin is located. 
            example: port_A , port_B , Port_C , port_D , port_F

        uint8 Pin : enter the number of pin that you want to configure

        uint8 status : enter what configure you want that you want
            example:   0,1
    return : no return
*/
    void Pin_Write(uint8 Port,uint8 pin,uint8 Status){ //write pin with status HIGH =1 or LOW=0
        switch (Port) {
            case 0://port A
                GPIO_PORTA_DATA_R |= set_selected_pin(pin,Status);
                break;
            case 1://port B
                GPIO_PORTB_DATA_R |= set_selected_pin(pin,Status);
                break;
            case 2://port C
                GPIO_PORTC_DATA_R |= set_selected_pin(pin,Status);
                break;
            case 3://port D
                GPIO_PORTD_DATA_R |= set_selected_pin(pin,Status);
                break;
            case 4://port E
                GPIO_PORTE_DATA_R |= set_selected_pin(pin,Status);
                break;
            case 5://port F
                GPIO_PORTF_DATA_R |= set_selected_pin(pin,Status);
                break;
                   }
}

/*Pin_PullUP(uint8 port,uint8 location_button) description: 
    Configure the pin to be a pull up pin
    parameter:
        uint8 Port : enter the name of port "defined at Ports.h". Where pin is located. 
            example: port_A , port_B , Port_C , port_D , port_F

        uint8 Pin : enter the number of pin that you want to configure
    return : no return
*/

void Pin_PullUP(uint8 port,uint8 location_button){
    switch (port) {
        case 0://port A
             GPIO_PORTA_PUR_R |= set_selected_pin(location_button,1);
            break;
        case 1://port B
             GPIO_PORTB_PUR_R |= set_selected_pin(location_button,1);
            break;
        case 2://port C
             GPIO_PORTC_PUR_R |= set_selected_pin(location_button,1);
            break;
        case 3://port D
             GPIO_PORTD_PUR_R |= set_selected_pin(location_button,1);
            break;
        case 4://port E
             GPIO_PORTE_PUR_R |= set_selected_pin(location_button,1);
            break;
        case 5://port F
             GPIO_PORTF_PUR_R |= set_selected_pin(location_button,1);
            break;
    }
}

/*Pin_Read(uint8 port,uint8 location_button) description: 
    read the pin 
    parameter:
        uint8 Port : enter the name of port "defined at Ports.h". Where pin is located. 
            example: port_A , port_B , Port_C , port_D , port_F

        uint8 location_button: enter the number of pin that you want to read
    return : 0 or 1
*/

uint8 Pin_Read(uint8 port,uint8 location_button){
    switch (port) {
        case 0://port A
            return GPIO_PORTA_DATA_R & status_pin(location_button,1);
            break;
        case 1://port B
            return GPIO_PORTB_DATA_R & status_pin(location_button,1);
            break;
        case 2://port C
            return GPIO_PORTC_DATA_R & status_pin(location_button,1);
            break;
        case 3://port D
            return GPIO_PORTD_DATA_R & status_pin(location_button,1);
            break;
        case 4://port Ebj b  
            return GPIO_PORTE_DATA_R & status_pin(location_button,1);
            break;
        case 5://port F
            return GPIO_PORTF_DATA_R &status_pin(location_button,1);
            break;
    }
}

/*Pin_Clear(uint8 port,uint8 pin) description: 
    clear the pin 
    parameter:
        uint8 Port : enter the name of port "defined at Ports.h". Where pin is located. 
            example: port_A , port_B , Port_C , port_D , port_F

        uint8 pin: enter the number of pin that you want to clear
    return : 0 or 1
*/

void Pin_Clear(uint8 port,uint8 pin){
    switch (port) {
        case 0://port A
            GPIO_PORTA_DATA_R &= clear_pin(pin,1);
            break;
        case 1://port B
             GPIO_PORTB_DATA_R &= clear_pin(pin,1);
            break;
        case 2://port C
            GPIO_PORTC_DATA_R &= clear_pin(pin,1);
            break;
        case 3://port D
            GPIO_PORTD_DATA_R &= clear_pin(pin,1);
            break;
        case 4://port E
            GPIO_PORTE_DATA_R &= clear_pin(pin,1);
            break;
        case 5://port F
            GPIO_PORTF_DATA_R &= clear_pin(pin,1);
            break;
    }
}