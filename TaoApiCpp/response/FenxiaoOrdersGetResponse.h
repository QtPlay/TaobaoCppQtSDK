#ifndef FENXIAOORDERSGETRESPONSE_H
#define FENXIAOORDERSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/PurchaseOrder.h>


/**
 * @brief TOP RESPONSE API: 分销商或供应商均可用此接口查询采购单信息. (发货处理请调用物流API中的发货接口)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrdersGetResponse : public TaoResponse
{
public:
 virtual ~FenxiaoOrdersGetResponse() { }

  QList<PurchaseOrder> getPurchaseOrders() const;
  void setPurchaseOrders (QList<PurchaseOrder> purchaseOrders);  qlonglong getTotalResults() const;
  void setTotalResults (qlonglong totalResults);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 采购单及子采购单信息。返回 PurchaseOrder 包含的字段信息。
 **/
  QList<PurchaseOrder> purchaseOrders;

/**
 * @brief 搜索到的采购单记录总数
 **/
  qlonglong totalResults;

};

#endif
