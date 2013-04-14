#ifndef VASORDERSEARCHRESPONSE_H
#define VASORDERSEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ArticleBizOrder.h>


/**
 * @brief TOP RESPONSE API: 用于ISV查询自己名下的应用及收费项目的订单记录（已付款订单）。 
建议用于查询前一日的历史记录。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class VasOrderSearchResponse : public TaoResponse
{
public:
 virtual ~VasOrderSearchResponse() { }

  QList<ArticleBizOrder> getArticleBizOrders() const;
  void setArticleBizOrders (QList<ArticleBizOrder> articleBizOrders);  qlonglong getTotalItem() const;
  void setTotalItem (qlonglong totalItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 商品订单对象
 **/
  QList<ArticleBizOrder> articleBizOrders;

/**
 * @brief 总记录数
 **/
  qlonglong totalItem;

};

#endif
