"use client"

import { NavLink } from "react-router";
import { Button } from "./components/ui/button"

function LandingPage() {
    return (
        <div className="flex flex-col items-center gap-4">
            <div className="">Hello!</div>
            <NavLink to="/ClickerGame">
                <Button className="text-[20px] font-semibold" variant="outline">Clicker Game</Button>
            </NavLink>
            <NavLink to="/AIWorkshop">
                <Button className="text-[20px] font-semibold" variant="outline">AI Workshop</Button>
            </NavLink>
        </div>
    )
}

export default LandingPage