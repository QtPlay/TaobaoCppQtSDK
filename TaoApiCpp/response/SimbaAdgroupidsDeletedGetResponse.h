#ifndef SIMBAADGROUPIDSDELETEDGETRESPONSE_H
#define SIMBAADGROUPIDSDELETEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取删除的推广组ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupidsDeletedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaAdgroupidsDeletedGetResponse() { }

  QList<qlonglong> getDeletedAdgroupIds() const;
  void setDeletedAdgroupIds (QList<qlonglong> deletedAdgroupIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 推广组ID列表
 **/
  QList<qlonglong> deletedAdgroupIds;

};

#endif
