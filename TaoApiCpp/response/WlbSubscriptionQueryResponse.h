#ifndef WLBSUBSCRIPTIONQUERYRESPONSE_H
#define WLBSUBSCRIPTIONQUERYRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbSellerSubscription.h>


/**
 * @brief TOP RESPONSE API: 查询商家定购的所有服务,可通过入参状态来筛选
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbSubscriptionQueryResponse : public TaoResponse
{
public:
 virtual ~WlbSubscriptionQueryResponse() { }

  QList<WlbSellerSubscription> getSellerSubscriptionList() const;
  void setSellerSubscriptionList (QList<WlbSellerSubscription> sellerSubscriptionList);  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 卖家定购的服务列表
 **/
  QList<WlbSellerSubscription> sellerSubscriptionList;

/**
 * @brief 结果总数
 **/
  qlonglong totalCount;

};

#endif
