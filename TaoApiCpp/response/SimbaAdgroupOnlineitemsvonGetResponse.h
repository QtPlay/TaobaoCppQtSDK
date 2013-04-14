#ifndef SIMBAADGROUPONLINEITEMSVONGETRESPONSE_H
#define SIMBAADGROUPONLINEITEMSVONGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <TaoApiCpp/domain/SubwayItemPartition.h>


/**
 * @brief TOP RESPONSE API: 获取用户上架在线销售的全部宝贝
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupOnlineitemsvonGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupOnlineitemsvonGetResponse() { }

  SubwayItemPartition getPageItem() const;
  void setPageItem (SubwayItemPartition pageItem);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 带分页的淘宝商品
 **/
  SubwayItemPartition pageItem;

};

#endif
