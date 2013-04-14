#ifndef PRODUCTSSEARCHRESPONSE_H
#define PRODUCTSSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/Product.h>


/**
 * @brief TOP RESPONSE API: 只有天猫商家发布商品时才需要用到； 
两种方式搜索所有产品信息(二种至少传一种):  
传入关键字q搜索  
传入cid和props搜索  
返回值支持:product_id,name,pic_path,cid,props,price,tsc 
当用户指定了cid并且cid为垂直市场（3C电器城、鞋城）的类目id时，默认只返回小二确认的产品。如果用户没有指定cid，或cid为普通的类目，默认返回商家确认或小二确认的产品。如果用户自定了status字段，以指定的status类型为准
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ProductsSearchResponse : public TaoResponse
{
public:
 virtual ~ProductsSearchResponse() { }

  QList<Product> getProducts() const;
  void setProducts (QList<Product> products);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回具体信息为入参fields请求的字段信息
 **/
  QList<Product> products;

/**
 * @brief 结果总数
 **/
  qlonglong totalResults;

};

#endif
