



# Simple Billing System in C  

The **Simple Billing System** is a C-based program that collects customer details, records purchased items and their prices, and generates a detailed bill in a formatted structure.  

---

## Key Features  

- **User Input**:  
  - Capture customer name and address.  
  - Input details for multiple purchased items, including names and prices.  

- **Bill Generation**:  
  - Display itemized billing information, including:  
    - Item ID  
    - Item Name  
    - Item Price  
  - Calculate and display the total cost.  

- **Output**:  
  - Print the complete bill in a structured format to the terminal.  

---

## Technologies and Tools  

- **Language**: C  
- **Compiler**: GCC or any standard C compiler.  

---

## Project Organization  

The project consists of a single source code file:  
```
/Billing System  
└── billing_system.c       # Source file containing the program logic  
```  

---

## How to Execute the Program  

### Prerequisites  
- Install **GCC** or any C compiler on your system.  

### Steps to Run  

1. Save the source code as `billing_system.c`.  
2. Open a terminal and navigate to the directory where the file is saved.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the executable file:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the prompts to provide:  
   - Customer details (name and address).  
   - Number of items purchased.  
   - Names and prices of each item.  

---

## Example Usage  

### Input  
```  
Enter your name: Alice  
Enter your address: Green_Street  
Enter total items: 2  

Enter 1 item name: Bread  
Enter price: 50  
Enter 2 item name: Milk  
Enter price: 30  
```  

### Output  
```  
         Neluni Store  
         ------------  

Name: Alice      Address: Green_Street  

Id: 1    Name: Bread     Price: 50  
------------------------------------------------  
Id: 2    Name: Milk      Price: 30  
------------------------------------------------  
                Total: 80  

         Thanks for Visiting  
```  

---

## Additional Notes  

- **Core Concepts**: Demonstrates fundamental use of structures, arrays, and basic input/output handling in C.  
- **Workflow**:  
  1. Captures user inputs.  
  2. Stores item data in a structure array.  
  3. Calculates and displays the total price.  
- **Customizability**: The program logic can be expanded to include advanced features like discounts or tax calculations.  

---  

