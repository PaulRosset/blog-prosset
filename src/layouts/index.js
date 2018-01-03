import React from "react";
import PropTypes from "prop-types";
import Link from "gatsby-link";
import Helmet from "react-helmet";
import styled from "styled-components";

import Box from "./box";

import "./index.css";

const ContainerText = styled.div`
  width: 70%;
  margin: 0 auto;
  color: white;
  margin-top: 5em;
`;

const TemplateWrapper = ({ children }) => (
  <div>
    <Helmet
      title="Gatsby Default Starter"
      meta={[
        { name: "description", content: "Sample" },
        { name: "keywords", content: "sample, something" }
      ]}
    />
    {/* <Header /> */}
    <div
      style={{
        margin: "75px auto",
        maxWidth: 960,
        padding: "0px 1.0875rem 1.45rem",
        paddingTop: 0
      }}
    >
      <div style={{ width: "100%", textAlign: "center" }}>
        <Link to="/page-2">
          <Box color="#333cff" degrad="51, 60, 255" anim="0" />
        </Link>
        <Link to="/">
          <Box color="#F7720C" degrad="247, 114, 12" anim="1" />
        </Link>
        <Box color="#41b883" degrad="65, 184, 131" anim="2" />
      </div>
      <ContainerText>{children()}</ContainerText>
    </div>
  </div>
);

TemplateWrapper.propTypes = {
  children: PropTypes.func
};

export default TemplateWrapper;
