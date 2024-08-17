Updates to keyboard shortcuts … On Thursday, August 1, 2024, Drive keyboard shortcuts will be updated to give you first-letters navigation.Learn more
package com.app.core;

import java.time.LocalDate;
import java.util.Objects;

import javax.tools.DocumentationTool.Location;

public class Tourism {
	private String activityId;
	private String activityName;
	private Location location;
	private LocalDate date;
	private double price;
	private int capacity;
	
	public Tourism(String activityId, String activityName, Location location, LocalDate date, double price,int capacity) {
		super();
		this.activityId = activityId;
		this.activityName = activityName;
		this.location = location;
		this.date = date;
		this.price = price;
		this.capacity = capacity;
	}

	public Tourism(String activityId) {
		this.activityId=activityId;
	}

	public String getActivityId() {
		return activityId;
	}

	public void setActivityId(String activityId) {
		this.activityId = activityId;
	}

	public String getActivityName() {
		return activityName;
	}

	public void setActivityName(String activityName) {
		this.activityName = activityName;
	}

	public Location getLocation() {
		return location;
	}

	public void setLocation(Location location) {
		this.location = location;
	}

	public LocalDate getDate() {
		return date;
	}

	public void setDate(LocalDate date) {
		this.date = date;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}

	public int getCapacity() {
		return capacity;
	}

	public void setCapacity(int capacity) {
		this.capacity = capacity;
	}

	@Override
	public String toString() {
		return "Tourism [activityId=" + activityId + ", activityName=" + activityName + ", location=" + location
				+ ", date=" + date + ", price=" + price + ", capacity=" + capacity + "]";
	}

	@Override
	public int hashCode() {
		return Objects.hash(activityId);
	}

	@Override
	public boolean equals(Object obj) {
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Tourism other = (Tourism) obj;
		return Objects.equals(activityId, other.activityId);
	}
	
	

}