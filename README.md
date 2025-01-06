# **🧾 Simple Billing System in C**  

A beginner-friendly **C program** designed to log **customer details**, record **purchased items**, and generate an itemized bill directly in the terminal. 🎉  

---

## **✨ Key Features**  

### 🔹 **Effortless Input**  
- Enter **customer details** like name and address.  
- Add multiple **items** with their names and prices.  

### 🔹 **Comprehensive Bill Generation**  
- Creates a neatly formatted bill including:  
  - 🆔 **Item ID**  
  - 🏷️ **Item Name**  
  - 💰 **Item Price**  
- Automatically calculates the **total cost**.  

### 🔹 **Clear Output**  
- Displays the bill in an easy-to-read layout for quick review.  

---

## **🛠️ Tools & Setup**  

- **Language**: C  
- **Compiler**: GCC or any standard C compiler.  

---

## **📂 Project Structure**  

This project includes a single source file:  

```plaintext  
/BillingSystem  
└── billing_system.c  
```  

---

## **🚀 Running the Program**  

### ✅ **Requirements**  
Ensure a **C compiler** (e.g., GCC) is installed.  

### ✅ **Steps**  

1. Save the source code as `billing_system.c`.  
2. Open your terminal and navigate to the file directory.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Execute the program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow on-screen prompts to enter:  
   - **Customer name and address**  
   - **Item details** (names and prices)  

---

## **🖥️ Example Usage**  

### **User Input:**  
```plaintext  
Enter customer name: Sarah  
Enter customer address: Maple Avenue  
Enter total items: 2  

Enter 1 item name: Milk  
Enter price: 45  
Enter 2 item name: Bread  
Enter price: 30  
```  

### **Program Output:**  
```plaintext  
          🧾 Simple Billing System  
          -------------------------  

Customer: Sarah        Address: Maple Avenue  

ID: 1    Name: Milk      Price: 45  
------------------------------------------------  
ID: 2    Name: Bread     Price: 30  
------------------------------------------------  
                    Total: 75 💵  

     Thank You for Shopping with Us! 🙏  
```  

---

## **🔍 Core Concepts**  

### 🛠️ **Programming Features**  
- **Structures**: To organize customer and item data.  
- **Arrays**: For storing multiple items dynamically.  
- **Input/Output Functions**: Enable user interaction and formatted display.  

### 🚦 **Program Workflow**  
1. Input **customer details** and **items with prices**.  
2. Store data using **arrays** and **structures**.  
3. Calculate the **total cost** and display the formatted bill.  

---

## **💡 Future Enhancements**  

- **Tax Calculation**: Add options to include taxes.  
- **Discount Features**: Enable users to apply discounts.  
- **Save Bills**: Allow bills to be saved as text files.  
- **Enhanced Interface**: Use libraries like `ncurses` for an interactive UI.  
- **Customer History**: Implement a feature to maintain purchase records.  

---

