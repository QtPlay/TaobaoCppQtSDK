#ifndef SIMBANONSEARCHADGROUPPLACESADDRESPONSE_H
#define SIMBANONSEARCHADGROUPPLACESADDRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroupPlace.h>


/**
 * @brief TOP RESPONSE API: 批量推广组添加定向推广投放位置，出价使用默认出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesAddResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchAdgroupplacesAddResponse() { }

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
