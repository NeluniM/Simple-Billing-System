



# Simple Billing System in C

A simple billing system program written in C that collects customer details, accepts a list of purchased items with their prices, and generates a formatted bill.

---

## Features

- **User Input**: 
  - Collect customer name and address.
  - Input multiple items with their names and prices.
- **Bill Display**: 
  - Itemized bill with:
    - Item ID
    - Item Name
    - Item Price
  - Total cost calculation.
- **Terminal Output**: Prints the bill in a structured format.

---

## Technologies Used

- **Programming Language**: C
- **Tools**: GCC or any standard C compiler.

---

## Project Structure
```
/Billing System
├── billing_system.c       # Source code for the billing system
```

---

## How to Run the Application

### Prerequisites
1. **C Compiler**: Install GCC or any other standard C compiler on your system.

### Steps to Run the Program

1. Save the program as `billing_system.c`.
2. Open a terminal and navigate to the directory containing `billing_system.c`.
3. Compile the program:
   ```bash
   gcc billing_system.c -o billing_system
   ```
4. Run the compiled program:
   ```bash
   ./billing_system
   ```
5. Follow the prompts to input:
   - Your name and address.
   - Number of items purchased.
   - Item names and prices.

---

## Example Usage

### Input:
```
Enter your name : Alice
Enter your address : Green_Street
Enter total items : 2

Enter 1 item name : Bread
Enter price : 50
Enter 2 item name : Milk
Enter price : 30
```

### Output:
```
         Neluni Store 
         ------------  

Name : Alice      Address : Green_Street 

Id : 1    Name : Bread     Price : 50
------------------------------------------------
Id : 2    Name : Milk      Price : 30
------------------------------------------------
                Total : 80


         Thanks for Visiting  
```

---

## Additional Information

- **Language**: C
- **Purpose**: Demonstrates basic use of structures, arrays, and input/output handling in C.
- **Program Flow**:
  1. Collects user input.
  2. Stores item data in a structure array.
  3. Calculates the total price.
  4. Displays a formatted bill.

---
