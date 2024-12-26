# 🧾 Simple Billing System in C  

The **Simple Billing System** is a fundamental program written in C that enables users to capture customer details, log purchased items with their prices, and generate an organized, itemized bill directly in the terminal.  

---

## ✨ Features  

### 📝 User Input:  
- Collect customer **name** 🧑‍💼 and **address** 🏠.  
- Record multiple items along with their **names** 🏷️ and **prices** 💵.  

### 📊 Bill Generation:  
- Display a detailed, structured bill including:  
  - 🆔 **Item ID**  
  - 🏷️ **Item Name**  
  - 💲 **Item Price**  
- Automatically calculate and display the **total amount** 💰.  

### 📋 Clean and Readable Output:  
- Generate a well-formatted bill in the terminal for quick review and simplicity.  

---

## 🛠️ Tools & Technologies  

- **Language**: C Programming 💻  
- **Compiler**: GCC or any standard C compiler ⚙️.  

---

## 📂 Project Structure  

The project is compact and includes a single source file:  
```
/Billing System  
└── billing_system.c  # Contains all program logic  
```  

---

## 🚀 How to Run the Program  

### 📌 Prerequisites  
- Ensure a **C compiler** (like GCC) is installed on your system.  

### 📋 Steps  

1. Save the source code as `billing_system.c`.  
2. Open a terminal and navigate to the file’s directory.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the compiled program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the prompts to:  
   - Enter customer details.  
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
         🛍️ Simple Billing System  
         ------------------------  

Name: Alice      Address: Green Street  

Id: 1    Name: Bread     💲Price: 50  
------------------------------------------------  
Id: 2    Name: Milk      💲Price: 30  
------------------------------------------------  
                  🧾 Total: 80  

        🙏 Thank You for Shopping!  
```  

---

## 🔍 Key Concepts  

- **Core Features**:  
  - Demonstrates the use of **structures**, **arrays**, and **basic input/output** in C.  
  - Implements effective **data organization** for a billing application.  

- **Workflow**:  
  1. Input customer details and item list with prices.  
  2. Use a **structured array** to store and manage the data.  
  3. Compute and display the formatted **total bill**.  

- **Expandable Options**:  
  - Include **tax calculations** or **discount options** for enhanced functionality.  
  - Add an option to **save the bills** to a file for record-keeping 📂.  

---

## 🔧 Future Enhancements  

- **Tax & Discounts**: Add options to calculate and display taxes or discounts.  
- **File Saving** 📄: Save generated bills as files for future reference.  
- **Customer History** 📊: Create a database for tracking purchase history.  
- **Improved UI** 🎨: Use libraries like **ncurses** to add a visually appealing interface.  

--- 
