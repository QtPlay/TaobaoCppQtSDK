#ifndef WLBITEMCOMBINATIONGETRESPONSE_H
#define WLBITEMCOMBINATIONGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 根据商品id查询商品组合关系
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbItemCombinationGetResponse : public TaoResponse
{
public:
 virtual ~WlbItemCombinationGetResponse() { }

  QList<qlonglong> getItemIdList() const;
  void setItemIdList (QList<qlonglong> itemIdList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 组合子商品id列表
 **/
  QList<qlonglong> itemIdList;

};

#endif
