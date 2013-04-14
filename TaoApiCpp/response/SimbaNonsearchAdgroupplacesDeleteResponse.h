#ifndef SIMBANONSEARCHADGROUPPLACESDELETERESPONSE_H
#define SIMBANONSEARCHADGROUPPLACESDELETERESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroupPlace.h>


/**
 * @brief TOP RESPONSE API: 批量删除推广组定向推广投放位置
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaNonsearchAdgroupplacesDeleteResponse : public TaoResponse
{
public:
 virtual ~SimbaNonsearchAdgroupplacesDeleteResponse() { }

  QList<ADGroupPlace> getAdgroupPlaceList() const;
  void setAdgroupPlaceList (QList<ADGroupPlace> adgroupPlaceList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组定向推广投放位置列表
 **/
  QList<ADGroupPlace> adgroupPlaceList;

};

#endif
