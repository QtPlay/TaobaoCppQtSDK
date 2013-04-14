#ifndef PRODUCTADDRESPONSE_H
#define PRODUCTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Product.h>


/**
 * @brief TOP RESPONSE API: 获取类目ID，必需是叶子类目ID；调用taobao.itemcats.get.v2获取  
传入关键属性,结构:pid:vid;pid:vid.调用taobao.itemprops.get.v2获取pid, 
调用taobao.itempropvalues.get获取vid;如果碰到用户自定义属性,请用customer_props.
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductAddResponse : public TaoResponse
{
public:
 virtual ~ProductAddResponse() { }

  Product getProduct() const;
  void setProduct (Product product);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 产品结构
 **/
  Product product;

};

#endif
