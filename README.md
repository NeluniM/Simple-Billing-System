# 🧾 Simple Billing System in C  

The **Simple Billing System** is a basic program written in C that helps users capture customer details, log purchased items with their prices, and generate an organized, itemized bill directly in the terminal.  

---

## ✨ Features  

### 📝 User Input:  
- Collect customer **name** and **address** 🏠.  
- Record multiple items with their **names** 🏷️ and **prices** 💰.  

### 📊 Bill Generation:  
- Display a clear, structured bill with:  
  - 🆔 **Item ID**  
  - 🏷️ **Item Name**  
  - 💲 **Item Price**  
- Automatically calculate and print the **total amount** 💵.  

### 📋 Neat and Readable Output:  
- Generate a formatted bill in the terminal for easy review.  

---

## 🛠️ Tools & Technologies  

- **Language**: C Programming 🖥️  
- **Compiler**: GCC or any standard C compiler 🛠️.  

---

## 📂 Project Structure  

This project consists of a single source file:  
```
/Billing System  
└── billing_system.c  # Contains the complete program logic  
```  

---

## 🚀 How to Run the Program  

### 📌 Prerequisites  
- A **C compiler** (e.g., GCC) must be installed on your system.  

### 📋 Steps  

1. Save the source code as `billing_system.c`.  
2. Open your terminal and navigate to the file’s location.  
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
   - Add items with their respective prices.  

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

- **Core Features**:  
  - Demonstrates the use of **structures**, **arrays**, and **input/output** functions in C.  
  - Implements basic **data organization** for billing purposes.  

- **Workflow**:  
  1. Input customer details and item list with prices.  
  2. Store data in a **structured array** for organized processing.  
  3. Compute and display a formatted **total bill**.  

- **Expandable Options**:  
  - Add **tax calculations** or **discount options**.  
  - Save the generated bills to a file for **record-keeping** 📂.  

---

## 🔧 Future Enhancements  

- **Tax and Discounts** 🧾: Add calculations for taxes and item discounts.  
- **File Export** 📄: Save bills as text files for future reference.  
- **Searchable Database** 🔍: Maintain a database of customers and purchase history.  
- **Enhanced UI** 🖼️: Use libraries like **ncurses** for a visually appealing terminal interface.  

---
