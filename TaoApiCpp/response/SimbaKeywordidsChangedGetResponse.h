#ifndef SIMBAKEYWORDIDSCHANGEDGETRESPONSE_H
#define SIMBAKEYWORDIDSCHANGEDGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>


/**
 * @brief TOP RESPONSE API: 获取修改的词ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordidsChangedGetResponse : public TaoResponse
{
public:
 virtual ~SimbaKeywordidsChangedGetResponse() { }

  QList<qlonglong> getChangedKeywordIds() const;
  void setChangedKeywordIds (QList<qlonglong> changedKeywordIds);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 词的ID列表
 **/
  QList<qlonglong> changedKeywordIds;

};

#endif
