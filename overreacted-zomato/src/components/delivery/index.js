import React from 'react'
import Filters from '../common/filters'
import "./Delivery.css"
import TuneIcon from '@mui/icons-material/Tune';
import SwapVertIcon from '@mui/icons-material/SwapVert';
import DeliveryCollections from './deliveryCollections';
import Topbrands from './topbrands';
import ExploreSection from '../common/exploreSection';
import { restaurants } from '../../data/restaurants';

const deliveryFilters=[
    {
        id:1,
        icon : <TuneIcon className = "absolute-center"/>,
        title: "Filters",

    },
    {
        id:2,
        title: "Rating: 4.0+",
    },
    
    {
        id:3,
        icon: <SwapVertIcon className = "absolute-center" />,
        title: "Delivery Time",
    },
    {
        id:4,
        title: "Great Offers",
    },
    {
        id:5,
        title: "Safe & Hygienic",
    },
    {
        id:6,
        title: "Pure Veg",
    },

]

const restaurantsList = restaurants;

const Delivery = () => {
    return (
        <div>
            <div className="max-width">
            <Filters filterList={deliveryFilters}/>
            </div>
            <DeliveryCollections/>
            <Topbrands />
            <ExploreSection list={restaurantsList}
        collectionName="Delivery Restaurants in Bangalore"/>
        </div>
    )
}

export default Delivery
