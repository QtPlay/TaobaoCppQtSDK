#ifndef PRODUCTSGETRESPONSE_H
#define PRODUCTSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Product.h>


/**
 * @brief TOP RESPONSE API: 根据淘宝会员帐号搜索所有产品信息，只有天猫商家发布商品时才需要用到。  
注意：支持分页，每页最多返回100条,默认值为40,页码从1开始，默认为第一页
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductsGetResponse : public TaoResponse
{
public:
 virtual ~ProductsGetResponse() { }

  QList<Product> getProducts() const;
  void setProducts (QList<Product> products);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回具体信息为入参fields请求的字段信息
 **/
  QList<Product> products;

};

#endif
