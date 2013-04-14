#ifndef WLBITEMMAPGETRESPONSE_H
#define WLBITEMMAPGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/OutEntityItem.h>


/**
 * @brief TOP RESPONSE API: 根据物流宝商品ID查询商品映射关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemMapGetResponse : public TaoResponse
{
public:
 virtual ~WlbItemMapGetResponse() { }

  QList<OutEntityItem> getOutEntityItemList() const;
  void setOutEntityItemList (QList<OutEntityItem> outEntityItemList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 外部商品实体列表
 **/
  QList<OutEntityItem> outEntityItemList;

};

#endif
