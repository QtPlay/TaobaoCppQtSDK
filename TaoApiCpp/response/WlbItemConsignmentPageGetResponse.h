#ifndef WLBITEMCONSIGNMENTPAGEGETRESPONSE_H
#define WLBITEMCONSIGNMENTPAGEGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/WlbConsignMent.h>


/**
 * @brief TOP RESPONSE API: 代销商角度分页查询物流宝商品的代销关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemConsignmentPageGetResponse : public TaoResponse
{
public:
 virtual ~WlbItemConsignmentPageGetResponse() { }

  qlonglong getTotalCount() const;
  void setTotalCount (qlonglong totalCount);  QList<WlbConsignMent> getWlbConsignMents() const;
  void setWlbConsignMents (QList<WlbConsignMent> wlbConsignMents);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 条件查询结果总数
 **/
  qlonglong totalCount;

/**
 * @brief 代销关系列表
 **/
  QList<WlbConsignMent> wlbConsignMents;

};

#endif
