



class CallHandler {
      public final int level = 3;
      Queue<Call>[] calls = new LinkedList<>[level];
      List<Employee>[] employees = new List<Employee>[level];

      public CallHandler () {

      }
      public Employee getCallHandler (Call call) {
        for (int i = 0; i < level - 1; i++) {
          List<Employee> employeeLevel = employees.get(i);
          for (Employee e : employeeLevel) {
            if (e.isAvailable) {
              return e;
            }
          }
        }
        return null;
      }
      public void dispatchCall (Call call) {
        Employee e = getCallHandler(call);
        if (e != null) {
          e.receiveCall(call);
        } else {
          calls[call.rank].offer(call);
        }
      }
      public void getNextCall (Employee e) {}
    }

    class Call {
      int rank = 0;
      public void reply (Stirng message) {}
      public void disconnect () {}
    }

    abstract class Employee {
      CallHander callHander;
      int rank;
      boolean isAvailable;
      Employee (int rank) {
        this.rank = rank;
      }
      public void receiveCall (Call call) {}
      public void completeCall () {}
      public void cannotHandle (Call call) {
        call.rank = rank + 1;
        callHander.dispatchCall(call);
        isAvailable = true;
        callHander.getNextCall(this);
      }
    }
    class Director extends Employee {
      public Director () {
        super(2);	
      }
    }
    class Manager extends Employee {
      public Manager () {
        super(1);
      }
    }
    class Respondent extends Employee {
      public Respondent () {
        super(0);
      }
    }





