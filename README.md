# **🧾 Simple Billing System in C**  

A beginner-friendly **C program** to log **customer details**, record **purchased items**, and generate an itemized **bill** in the terminal. Let’s explore its features! 🛍️💻  

---

## **✨ Key Features**  

📝 **Effortless Data Entry**  
- Enter **customer details** like name and address.  
- Record multiple **items** with their names and prices.  

💵 **Automatic Bill Generation**  
- Displays a **formatted bill** with:  
  - 🆔 Item IDs  
  - 🛒 Item Names  
  - 💲 Item Prices  
- Automatically calculates and displays the **total cost**.  

✅ **Clear and Concise Output**  
- Presents a clean, user-friendly bill for easy review.  

---

## **📂 Project Overview**  

```plaintext  
/BillingSystem  
└── billing_system.c  
```  

---

## **🚀 How to Run the Program**  

### Requirements:  
1. A **C compiler** (e.g., GCC).  

### Steps to Run:  
1. Save the code as `billing_system.c`.  
2. Open your terminal and navigate to the directory containing the file.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Execute the program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the prompts to input:  
   - Customer **name and address**.  
   - Item **details** (name and price).  

---

## **🖥️ Example Walkthrough**  

### **Input:**  
```plaintext  
Enter customer name: Sam  
Enter customer address: Oak Avenue  
Enter total items: 3  

Enter 1 item name: Book  
Enter price: 200  
Enter 2 item name: Pen  
Enter price: 20  
Enter 3 item name: Bag  
Enter price: 500  
```  

### **Output:**  
```plaintext  
          🧾 Simple Billing System  
          -------------------------  

Customer: Sam           Address: Oak Avenue  

ID: 1    Name: Book       Price: 200  
------------------------------------------------  
ID: 2    Name: Pen        Price: 20  
------------------------------------------------  
ID: 3    Name: Bag        Price: 500  
------------------------------------------------  
                    Total: 720 💰  

    🎉 Thank You for Shopping with Us! 🎉  
```  

---

## **🌟 Future Upgrades**  

🔧 **Tax & Discounts**:  
   - Add taxes and user-defined discounts for better accuracy.  

📄 **Save Bills**:  
   - Enable saving bills to files for future reference.  

📊 **Customer History**:  
   - Maintain records of customer purchases.  

🎨 **Enhanced UI**:  
   - Use libraries like `ncurses` for an interactive interface.  

---  

