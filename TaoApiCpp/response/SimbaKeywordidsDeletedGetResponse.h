#ifndef SIMBAKEYWORDIDSDELETEDGETRESPONSE_H
#define SIMBAKEYWORDIDSDELETEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取删除的词ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordidsDeletedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordidsDeletedGetResponse() { }

  QList<qlonglong> getDeletedKeywordIds() const;
  void setDeletedKeywordIds (QList<qlonglong> deletedKeywordIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词ID列表
 **/
  QList<qlonglong> deletedKeywordIds;

};

#endif
