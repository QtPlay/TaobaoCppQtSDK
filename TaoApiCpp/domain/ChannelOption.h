#ifndef CHANNELOPTION_H
#define CHANNELOPTION_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief Campaign投放频道
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class ChannelOption : public TaoDomain
{

public:
 virtual ~ChannelOption() { }

  qlonglong getChannelId() const;
  void setChannelId (qlonglong channelId);
  bool getIsNonsearch() const;
  void setIsNonsearch (bool isNonsearch);
  bool getIsSearch() const;
  void setIsSearch (bool isSearch);
  QString getName() const;
  void setName (QString name);
  QString getTrafficName() const;
  void setTrafficName (QString trafficName);
  QString getTrafficType() const;
  void setTrafficType (QString trafficType);
  
  virtual void parseResponse();

private:
/**
 * @brief 频道id
 **/
  qlonglong channelId;

/**
 * @brief 是否有非搜索流量，true：是；false：否；
 **/
  bool isNonsearch;

/**
 * @brief 是否有搜索流量，true：是；false：否；
 **/
  bool isSearch;

/**
 * @brief 频道名称
 **/
  QString name;

/**
 * @brief 流量名称
 **/
  QString trafficName;

/**
 * @brief 流量类型，taobao：淘宝站内；other：淘宝站外
 **/
  QString trafficType;

};

#endif  /* CHANNELOPTION_H */
