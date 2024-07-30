# KIBAR_STM32_NEXTION_ENHANCED_DRIVER
It is a Nextion Enhanced, Discovery and Basic HMI driver developed to support all STM32XXXX microcontrollers and boards, based on the HAL library. It supports all Nextion HMI command sets except for specific features.

How to Use Kibar Nextion HMI Driver?

If the command you are using is a Nextion tools command, you only need to include the header file related to that tool in your project. The aim here is to avoid unnecessary memory usage and prevent compilation of libraries that you do not use. If the command is a general Nextion command, it will be sufficient to include only the "kibar_nextion.h" header file.

The Kibar Nextion HMI driver, like all Kibar drivers, requires the creation of a Kibar struct. In the Nextion HMI driver, this is referred to as KIBAR_NEXTION (The KIBAR_NEXTION structure is created with a reference to the UART peripheral unit to which it is connected.).

To create it, the NEW_KIBAR_NEXTION() function should be called as shown in the image below.

//Image

Afterwards, you should create a structure for the Nextion tool you added. The general naming convention is as follows: KIBAR_NEXTION_TOOLS_NAME_. To create this structure in memory, you should call the creation command. The general naming convention is as follows: NEW_KIBAR_NEXTION_TOOLS_NAME(KIBAR_NEXTION_, char*, char*); Except for the Waveform and Page structures, all structures take three parameters. These are: the previously created KIBAR_NEXTION structure, the name of the page where the tool is located, and the name of the tool. The Waveform structure additionally takes an id, while the Page structure does not take the tool name.

//Image

You can now access the properties of the structures you have created through the structure itself. Below is an example code usage:

//Image

When using the properties of the created Nextion structures, you need to provide the structure itself and the necessary values related to that structure property as parameters.

As with all KIBAR drivers, the KIBAR_NEXTION driver returns a value of type KIBAR_STATUS for all its properties. If your code isn't working, you can check the returned KIBAR_STATUS value to verify whether the Nextion structure is functioning correctly.


Why am I getting "kibar_ERROR" as the return value?

You are likely encountering an error related to the UART peripheral unit or providing a value that is outside the range of valid limits for the property of the Nextion structure you are using.
