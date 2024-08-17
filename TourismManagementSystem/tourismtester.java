package com.app.tester;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.Scanner;

import com.app.core.Tourism;
import com.app.utils.TourismValidations;

public class TourismManagementSystem {

    public static void main(String[] args) {
        try (Scanner ln = new Scanner(System.in)) {
            
            boolean exit = false;
            ArrayList<Tourism> tour = new ArrayList<>();
            while (!exit) {
                System.out.println("Options:\n" +
                                   "1. Add new Activity\n" +
                                   "2. Display all activities\n" +
                                   "3. Display Activity names, date, location, price and capacity more than 100\n" +
                                   "4. Display Activities sorted by location\n" +
                                   "0. Exit");
                System.out.println("Choose an option from the menu:");
                
                switch (ln.nextInt()) {
                    //(String activityId, String activityName, Location location, LocalDate date, double price, int capacity)
                    case 1:
                        System.out.println("Enter Activity Id, Activity Name, Location, Date (yyyy-MM-dd), Price, Capacity");
                        Tourism tr = TourismValidations.validate(
                            ln.next(), ln.next(), ln.next(), ln.next(), ln.nextDouble(), ln.nextInt(), tour);
                        tour.add(tr);
                        System.out.println("New Activity added successfully");
                        break;

                    case 2:
                        System.out.println("All Activities of Tour:");
                        for (Tourism t : tour) {
                            System.out.println(t);
                        }
                        break;

                    case 3:
                        System.out.println("Activities with Capacity more than 100:");
                        Iterator<Tourism> itr = tour.iterator();
                        while (itr.hasNext()) {
                            Tourism next = itr.next();
                            if (next.getCapacity() > 100) {
                                System.out.println("Activity Name: " + next.getActivityName() +
                                                   " | Date: " + next.getDate() +
                                                   " | Location: " + next.getLocation() +
                                                   " | Price: " + next.getPrice() +
                                                   " | Capacity: " + next.getCapacity());
                            }
                        }
                        break;

                    case 4:
                        System.out.println("Activities Sorted by Location:");
                        Collections.sort(tour, (t1, t2) -> t1.getLocation().compareTo(t2.getLocation()));
                        for (Tourism t : tour) {
                            System.out.println(t);
                        }
                        break;

                    case 0:
                        exit = true;
                        System.out.println("Thank You....");
                        break;

                    default:
                        System.out.println("Invalid option! Please choose a valid option.");
                        break;
                }
            }

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
