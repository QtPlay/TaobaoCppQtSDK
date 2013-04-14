#ifndef ITEMRECOMMENDADDRESPONSE_H
#define ITEMRECOMMENDADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/Item.h>


/**
 * @brief TOP RESPONSE API: 将当前用户指定商品设置为橱窗推荐状态 
橱窗推荐需要用户有剩余橱窗位才可以顺利执行 
这个Item所属卖家从传入的session中获取，需要session绑定 
需要判断橱窗推荐是否已满，橱窗推荐已满停止调用橱窗推荐接口，2010年1月底开放查询剩余橱窗推荐数后可以按数量橱窗推荐商品
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ItemRecommendAddResponse : public TaoResponse
{
public:
 virtual ~ItemRecommendAddResponse() { }

  Item getItem() const;
  void setItem (Item item);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 被推荐的商品的信息
 **/
  Item item;

};

#endif
