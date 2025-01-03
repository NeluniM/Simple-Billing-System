# **🧾 Simple Billing System in C**  

The **Simple Billing System** is a beginner-friendly program written in **C** that enables users to input **customer details**, log **purchased items**, and generate an itemized bill right in the terminal. 🎯  

---

## **✨ Features**  

### 🔷 **User-Friendly Input**  
- Collect **customer details** (e.g., name and address).  
- Log multiple **items** with their respective **names** and **prices**.  

### 🔷 **Detailed Bill Creation**  
- Generates an organized bill that includes:  
  - 🔢 **Item ID**  
  - 🏷️ **Item Name**  
  - 💵 **Item Price**  
- Calculates and displays the **total amount** automatically.  

### 🔷 **Clean & Readable Output**  
- The bill is displayed in a neat format, making it easy to review.  

---

## **🛠️ Tools & Technologies**  

- **Language:** C  
- **Compiler:** GCC or any standard C compiler.  

---

## **📂 Project Structure**  

The program contains a single source file:  
```
/BillingSystem  
└── billing_system.c  
```  

---

## **🚀 How to Run**  

### ✅ **Prerequisites**  
Ensure you have a C compiler like GCC installed.  

### ✅ **Steps**  

1. Save the program as `billing_system.c`.  
2. Open a terminal and navigate to the file’s directory.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the prompts to input details like:  
   - **Customer name and address**.  
   - **Items** with their **prices**.  

---

## **🖥️ Example Interaction**  

### **User Input:**  
```  
Enter customer name: John  
Enter customer address: Elm Street  
Enter total items: 3  

Enter 1 item name: Apples  
Enter price: 100  
Enter 2 item name: Bananas  
Enter price: 60  
Enter 3 item name: Oranges  
Enter price: 80  
```  

### **Program Output:**  
```  
          🧾 Simple Billing System  
          -------------------------  

Customer: John        Address: Elm Street  

ID: 1    Name: Apples     Price: 100  
------------------------------------------------  
ID: 2    Name: Bananas    Price: 60  
------------------------------------------------  
ID: 3    Name: Oranges    Price: 80  
------------------------------------------------  
                    Total: 240 💵  

     Thank You for Shopping with Us! 🙏  
```  

---

## **🔍 Key Concepts**  

### 🔹 **Features Utilized:**  
- **Structures:** For organizing customer and item data.  
- **Arrays:** For storing multiple items.  
- **Input/Output Functions:** For user interaction.  

### 🔹 **Program Flow:**  
1. Input **customer details** and **item details**.  
2. Store data using arrays and structures.  
3. Calculate and format the **total bill**.  

---

## **🚀 Potential Upgrades**  

- **Tax & Discounts:** Add options to calculate taxes and apply discounts.  
- **Save to File:** Allow bills to be stored as text files for record-keeping.  
- **Enhanced UI:** Use libraries like `ncurses` for a better interface.  
- **Customer History:** Implement a system to track previous purchases.  

---

