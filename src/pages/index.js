import React from "react";
import Link from "gatsby-link";
import styled from "styled-components";

const Title = styled.h2`
  font-family: "Lato", sans-serif;
  background-color: white;
  display: inline-block;
  color: black;
`;

const IndexPage = () => (
  <div>
    <h1>Paul Rosset</h1>
    <Title>Junior Software developer</Title>
    <p>
      My name is Paul Rosset, a software developer, Im currently a student at
      Epitech school.<br />I like creating and make the things great. I am among
      those who thinks that the perseverance is the key to succeed.
    </p>
    <Link to="/page-2/">Go to page 2</Link>
  </div>
);

export default IndexPage;
