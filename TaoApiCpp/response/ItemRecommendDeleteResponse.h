#ifndef ITEMRECOMMENDDELETERESPONSE_H
#define ITEMRECOMMENDDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 取消当前用户指定商品的橱窗推荐状态 
这个Item所属卖家从传入的session中获取，需要session绑定
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemRecommendDeleteResponse : public TaoResponse
{
public:
 virtual ~ItemRecommendDeleteResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被取消橱窗推荐的商品信息
 **/
  Item item;

};

#endif
