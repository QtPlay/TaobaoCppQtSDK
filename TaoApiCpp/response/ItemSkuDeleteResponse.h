#ifndef ITEMSKUDELETERESPONSE_H
#define ITEMSKUDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Sku.h>


/**
 * @brief TOP RESPONSE API: 删除一个sku的数据 
需要删除的sku通过属性properties进行匹配查找
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemSkuDeleteResponse : public TaoResponse
{
public:
 virtual ~ItemSkuDeleteResponse() { }

  Sku getSku() const;
  void setSku (Sku sku);
  virtual void parseNormalResponse();

 private:
/**
 * @brief Sku结构
 **/
  Sku sku;

};

#endif
