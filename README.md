# 🧾 Simple Billing System in C  

The **Simple Billing System** is a basic program written in C that helps collect customer details, log purchased items with their prices, and generate a neat, itemized bill.  

---

##  Features  

### 📝 User Input:  
- Capture customer **name** and **address**.  
- Record multiple items with their **names** and **prices**.  

### 📊 Bill Generation:  
- Display a clear, structured bill that includes:  
  - 🆔 **Item ID**  
  - 🏷️ **Item Name**  
  - 💲 **Item Price**  
- Calculate and print the **total cost**.  

### 📋 Neat Output:  
- Print the final bill directly in the terminal.  

---

## 🛠️ Tools & Technologies  

- **Language**: C 🖥️  
- **Compiler**: GCC (or any standard C compiler).  

---

## 📂 Project Structure  

The project is simple, with just one source file:  
```
/Billing System  
└── billing_system.c  # Contains the complete program logic  
```  

---

## 🚀 How to Run the Program  

### 📌 Prerequisites  
- Ensure a **C compiler** like GCC is installed on your system.  

### 📋 Steps  

1. Save the source code as `billing_system.c`.  
2. Open your terminal and navigate to the file's location.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the compiled program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the on-screen instructions to:  
   - Input customer details.  
   - Specify items and their prices.  

---

## 💻 Example Interaction  

### User Input 📝  
```  
Enter your name: Alice  
Enter your address: Green Street  
Enter total items: 2  

Enter 1 item name: Bread  
Enter price: 50  
Enter 2 item name: Milk  
Enter price: 30  
```  

### Program Output 📋  
```  
         🛒 Neluni Store  
         ----------------  

Name: Alice      Address: Green Street  

Id: 1    Name: Bread     💲Price: 50  
------------------------------------------------  
Id: 2    Name: Milk      💲Price: 30  
------------------------------------------------  
                  🧾 Total: 80  

         😊 Thanks for Visiting!  
```  

---

## 🔍 Key Concepts  

- 📌 **Core Ideas**:  
  - Demonstrates the use of **structures**, **arrays**, and **input/output** functions in C.  
  - Highlights **basic data organization** for billing systems.  

- ⚡ **Workflow**:  
  1. Take user inputs for customer details and items.  
  2. Store data in a **structured array**.  
  3. Compute and display the **total price** in a formatted style.  

- 🔧 **Expandable Features**:  
  - Add **discounts** or **taxes** for a more advanced system.  
  - Store bills in a file for **record-keeping**.  

---

🎯 This program is perfect for beginners in C to explore **basic programming concepts** while working on a practical application!  
