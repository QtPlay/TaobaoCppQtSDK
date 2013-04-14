#ifndef SIMBANONSEARCHADGROUPPLACESUPDATERESPONSE_H
#define SIMBANONSEARCHADGROUPPLACESUPDATERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroupPlace.h>


/**
 * @brief TOP RESPONSE API: 批量修改推广组定向推广投放位置价格
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesUpdateResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchAdgroupplacesUpdateResponse() { }

  QList<ADGroupPlace> getAdgroupPlaceList() const;
  void setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组定向推广位置列表
 **/
  QList<ADGroupPlace> adgroupPlaceList;

};

#endif
