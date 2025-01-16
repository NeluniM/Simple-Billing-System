# **🧾 Simple Billing System in C**  

Create a beginner-friendly **C program** to log **customer details**, record **items purchased**, and generate an itemized **bill** right in your terminal. Let’s dive into its exciting features! 🛍️💻  

---

## **✨ Features at a Glance**  

📝 **Easy Customer Input**  
- Enter **customer name** and **address** effortlessly.  
- Record multiple **items** with their names and prices.  

💵 **Quick Bill Calculation**  
- Automatically generates a **detailed bill**:  
  - 🆔 **Item IDs**  
  - 🛒 **Item Names**  
  - 💲 **Prices**  
- Computes and displays the **total amount** seamlessly.  

✅ **Simple, Clean Output**  
- Displays a **formatted bill** for clarity and convenience.  

---

## **📂 Project Structure**  

```plaintext  
/BillingSystem  
└── billing_system.c  
```  

---

## **🚀 Steps to Run**  

### Requirements:  
1. A **C compiler** like GCC.  

### Execution:  
1. Save the code file as `billing_system.c`.  
2. Open a terminal and navigate to the file's directory.  
3. Compile the program:  
   ```bash  
   gcc billing_system.c -o billing_system  
   ```  
4. Run the compiled program:  
   ```bash  
   ./billing_system  
   ```  
5. Follow the on-screen prompts to enter:  
   - Customer **name** and **address**.  
   - Item **details** (name and price).  

---

## **🖥️ Demo Walkthrough**  

### **Input Example:**  
```plaintext  
Enter customer name: Alex  
Enter customer address: Maple Street  
Enter total items: 2  

Enter 1 item name: Notebook  
Enter price: 150  
Enter 2 item name: Marker  
Enter price: 50  
```  

### **Output Example:**  
```plaintext  
          🧾 Simple Billing System  
          -------------------------  

Customer: Alex           Address: Maple Street  

ID: 1    Name: Notebook    Price: 150  
------------------------------------------------  
ID: 2    Name: Marker      Price: 50  
------------------------------------------------  
                    Total: 200 💰  

    🎉 Thank You for Shopping with Us! 🎉  
```  

---

## **🌟 Enhancements to Consider**  

🔧 **Taxes and Discounts**  
   - Add tax calculation and customizable discounts.  

📄 **Bill Saving Option**  
   - Save bills to files for easy reference.  

📊 **Customer Records**  
   - Keep track of customer purchase history.  

🎨 **Improved Interface**  
   - Use libraries like `ncurses` to create a more interactive UI.  

---
