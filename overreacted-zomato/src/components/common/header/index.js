import React from "react";
import "./header.css";
import LocationOnIcon from "@mui/icons-material/LocationOn";
import ArrowDropDownIcon from "@mui/icons-material/ArrowDropDown";
import SearchIcon from "@mui/icons-material/Search";

const Header = () => {
  return (
    <div className="max-width header">
      <img
        src="https://b.zmtcdn.com/web_assets/b40b97e677bc7b2ca77c58c61db266fe1603954218.png"
        alt="zomato-logo"
        className="header-logo"
      />
      <div className="header-right">
        <div className="header-location-search-cointainer">
          <div className="location-wrapper">
            <div className="location-icon-name">
              <LocationOnIcon className="absolute-center location-icon" />
              <div>Bangalore</div>
            </div>
            <ArrowDropDownIcon className="absolute-center" />
          </div>
          <div className="location-search-seperater"></div>
          <div className="header-searchbar">
            <SearchIcon className="absolute-center search-icon" />
            <input
              placeholder="Search for restaurant, cuisine or a dish"
              className="search-input"
            />
          </div>
        </div>
        <div className="profile-wrapper">
          <img
            src="https://b.zmtcdn.com/images/user_avatars/mug_2x.png?fit=around%7C100%3A100&crop=100%3A100%3B%2A%2C%2A"
            alt="profile"
            className="header-profile-image"
          />
          <span className="header-username">User</span>
          <ArrowDropDownIcon className="absolute-center profile-options-icon" />
        </div>
      </div>
    </div>
  );
};

export default Header;
