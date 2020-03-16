

### Description

First application using [ReasonReact](https://reasonml.github.io/reason-react/), [Bucklescript](https://bucklescript.github.io) and [Next.js](https://nextjs.org) -  amazing stack!! 
### Setup


[Install `Node.js`](https://nodejs.org/en/).

[Install `yarn`](https://yarnpkg.com/en/docs/install).

### Run the app

```
yarn install
yarn dev:reason
yarn dev 
```

### Test
```
yarn test 
```


### Project Structure
```
--page              * app & index pages
--src
    --bindings      * node module bindings
    --components    * components
        --base      * common components
        --contact   * business componet - contact
--test              * jest test cases  
```

##### About test failure: Getting issues with bs-jest & jest due to some babel script transformation
