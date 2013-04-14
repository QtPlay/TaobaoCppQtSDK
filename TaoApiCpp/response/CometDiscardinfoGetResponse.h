#ifndef COMETDISCARDINFOGETRESPONSE_H
#define COMETDISCARDINFOGETRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/DiscardInfo.h>


/**
 * @brief TOP RESPONSE API: 获取一个appkey的哪些用户丢失了消息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class CometDiscardinfoGetResponse : public TaoResponse
{
public:
 virtual ~CometDiscardinfoGetResponse() { }

  QList<DiscardInfo> getDiscardInfoList() const;
  void setDiscardInfoList (QList<DiscardInfo> discardInfoList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 丢弃消息的列表
 **/
  QList<DiscardInfo> discardInfoList;

};

#endif
