#ifndef PRODUCTGETRESPONSE_H
#define PRODUCTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Product.h>


/**
 * @brief TOP RESPONSE API: 两种方式查看一个产品详细信息:  
传入product_id来查询  
传入cid和props来查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductGetResponse : public TaoResponse
{
public:
 virtual ~ProductGetResponse() { }

  Product getProduct() const;
  void setProduct (Product product);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回具体信息为入参fields请求的字段信息
 **/
  Product product;

};

#endif
