package com.app.utils;

import java.time.LocalDate;
import java.util.ArrayList;

import com.app.core.Tourism;
import com.app.custom_exception.TourismException;

public class TourismValidations {

    // Validate the inputs and return a Tourism object
    public static Tourism validate(String activityId, String activityName, String location, String date, double price, int capacity, ArrayList<Tourism> tlist) throws TourismException {
        String id = validateIdByLength(activityId);
        String finalId = validateId(id, tlist);
        com.app.core.Location finalloc = com.app.core.Location.valueOf(location); // Change to appropriate import if needed
        LocalDate d = LocalDate.parse(date);
        LocalDate finalDate = validateDate(d);
        int finalCapacity = validateCapacity(capacity);

        return new Tourism(finalId, activityName, finalloc, finalDate, price, finalCapacity);
    }

    // Validate capacity
    private static int validateCapacity(int capacity) throws TourismException {
        if (capacity < 10) {
            throw new TourismException("Capacity is less than 10");
        }
        return capacity;
    }

    // Validate date
    private static LocalDate validateDate(LocalDate d) throws TourismException {
        if (d.isBefore(LocalDate.now())) {
            throw new TourismException("Invalid Date");
        }
        return d;
    }

    // Validate ID length
    private static String validateIdByLength(String activityId) throws TourismException {
        if (activityId.length() != 8) {
            throw new TourismException("Invalid Id");
        }
        return activityId;
    }

    // Validate ID uniqueness
    private static String validateId(String activityId, ArrayList<Tourism> tlist) throws TourismException {
        for (Tourism t : tlist) {
            if (t.getActivityId().equals(activityId)) {
                throw new TourismException("Duplicate Activity Id");
            }
        }
        return activityId;
    }
}
