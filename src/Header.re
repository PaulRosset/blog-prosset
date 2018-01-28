[%bs.raw {|require('./Header.css')|}];

[@bs.module] external paul : string = "./paul.jpg";

let component = ReasonReact.statelessComponent("Header");

let make = (~name, _children) => {
    ...component,
    render: _shelf => 
        <header>
            <div className="container">
                <img className="profile" src={paul}/>
                <h3>{ReasonReact.stringToElement(name)}</h3>
                <div className="resume">
                    <p className="resume-profile">
                        {ReasonReact.stringToElement("Student, Developer, Functional programming lover.")}
                        <br/>
                        {ReasonReact.stringToElement("Passionate about building things and share it.")}
                        <br/>
                        {ReasonReact.stringToElement("Thirsty of knowledge.")}
                    </p>
                    <a href="https://www.twitter.com/RossetPaul" className="icon twitter">
                        <i className="fa fa-twitter"/>
                    </a>
                    <a href="https://www.linkedin.com/profile/view?id=AAIAABbpRe0B3A_Cmy2Ry3-cpt8i2AW51nCSLlo&amp;trk=nav_responsive_tab_profile_pic" className="icon linkedin">
                        <i className="fa fa-linkedin"/>
                    </a>
                    <a href="https://github.com/PaulRosset" className="icon github">
                        <i className="fa fa-github"/>
                    </a>
                    <a href="mailto:paulrosset96@gmail.com" className="icon email">
                        <i className="fa fa-envelope"/>
                    </a>
                </div>
            </div>
        </header> 
};