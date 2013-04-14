#ifndef SIMBAADGROUPADGROUPCATMATCHSGETRESPONSE_H
#define SIMBAADGROUPADGROUPCATMATCHSGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/ADGroupCatmatch.h>


/**
 * @brief TOP RESPONSE API: 根据一组推广组id获取推广组类目出价列表,
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupAdgroupcatmatchsGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupAdgroupcatmatchsGetResponse() { }

  QList<ADGroupCatmatch> getAdgroupCatmatchList() const;
  void setAdgroupCatmatchList (QList<ADGroupCatmatch> adgroupCatmatchList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 类目出价列表
 **/
  QList<ADGroupCatmatch> adgroupCatmatchList;

};

#endif
