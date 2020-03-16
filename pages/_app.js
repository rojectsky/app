import React from 'react';
import App from 'next/app';
import { library } from '@fortawesome/fontawesome-svg-core';
const Page = require('../src/components/base/layout/Page.bs').make;
import { faCheck } from '@fortawesome/free-solid-svg-icons';
library.add(faCheck);

class AccountApp extends App {
  static async getInitialProps({ Component, ctx }) {
    let pageProps = {};

    if (Component.getInitialProps) {
      pageProps = await Component.getInitialProps(ctx);
    }
    return { pageProps };
  }

  render() {
    const { Component, pageProps } = this.props;

    return (
      <Page>
        <Component {...pageProps} />
      </Page>
    );
  }
}

export default AccountApp;
