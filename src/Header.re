[%bs.raw {|require('./Header.css')|}];

let component = ReasonReact.statelessComponent("Header");

let make = (~name, _children) => {
    ...component,
    render: _shelf => 
        <header>
            <div className="container">
                <img className="profile" src="http://via.placeholder.com/150x150"/>
                <h3>{ReasonReact.stringToElement(name)}</h3>
                <div className="resume">
                    <p>{ReasonReact.stringToElement("Student developer, functional programing lover")}</p>
                    <a href="polo" className="icon twitter">
                        <i className="fa fa-twitter"/>
                    </a>
                    <a href="polo" className="icon linkedin">
                        <i className="fa fa-linkedin"/>
                    </a>
                    <a href="polo" className="icon github">
                        <i className="fa fa-github"/>
                    </a>
                </div>
            </div>
        </header> 
};