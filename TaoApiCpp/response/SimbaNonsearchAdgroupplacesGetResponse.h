#ifndef SIMBANONSEARCHADGROUPPLACESGETRESPONSE_H
#define SIMBANONSEARCHADGROUPPLACESGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroupPlace.h>


/**
 * @brief TOP RESPONSE API: 根据指定推广计划下推广组列表获取相应推广组投放位置包括通投位置和单独出价位置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesGetResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchAdgroupplacesGetResponse() { }

  QList<ADGroupPlace> getAdgroupPlaceList() const;
  void setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组定向推广位置关系列表
 **/
  QList<ADGroupPlace> adgroupPlaceList;

};

#endif
