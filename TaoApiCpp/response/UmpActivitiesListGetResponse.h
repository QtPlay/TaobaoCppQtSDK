#ifndef UMPACTIVITIESLISTGETRESPONSE_H
#define UMPACTIVITIESLISTGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 按照营销活动id的列表ids，查询对应的营销活动列表。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UmpActivitiesListGetResponse : public TaoResponse
{
public:
 virtual ~UmpActivitiesListGetResponse() { }

  QList<QString> getActivities() const;
  void setActivities (QList<QString> activities);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 营销活动列表！
 **/
  QList<QString> activities;

};

#endif
