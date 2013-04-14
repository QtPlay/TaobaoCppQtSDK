#ifndef ITEMCATSAUTHORIZEGETRESPONSE_H
#define ITEMCATSAUTHORIZEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SellerAuthorize.h>


/**
 * @brief TOP RESPONSE API: 查询B商家被授权品牌列表、类目列表和 c 商家新品类目列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemcatsAuthorizeGetResponse : public TaoResponse
{
public:
 virtual ~ItemcatsAuthorizeGetResponse() { }

  SellerAuthorize getSellerAuthorize() const;
  void setSellerAuthorize (SellerAuthorize sellerAuthorize);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 里面有3个数组： 
Brand[]品牌列表, 
ItemCat[] 类目列表 
XinpinItemCat[] 针对于C卖家新品类目列表
 **/
  SellerAuthorize sellerAuthorize;

};

#endif
