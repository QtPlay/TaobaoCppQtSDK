#ifndef SELLERCATSLISTADDRESPONSE_H
#define SELLERCATSLISTADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SellerCat.h>


/**
 * @brief TOP RESPONSE API: 此API添加卖家店铺内自定义类目  
父类目parent_cid值等于0：表示此类目为店铺下的一级类目，值不等于0：表示此类目有父类目  
注：因为缓存的关系,添加的新类目需8个小时后才可以在淘宝页面上正常显示，但是不影响在该类目下商品发布
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SellercatsListAddResponse : public TaoResponse
{
public:
 virtual ~SellercatsListAddResponse() { }

  SellerCat getSellerCat() const;
  void setSellerCat (SellerCat sellerCat);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 返回seller_cat数据结构中的：cid,created
 **/
  SellerCat sellerCat;

};

#endif
